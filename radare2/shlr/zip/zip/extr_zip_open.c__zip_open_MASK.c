
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_cdir {int comment; int nentry_alloc; int nentry; int entry; } ;
struct zip {int flags; int ch_flags; int * zp; int comment_orig; int nentry_alloc; int nentry; int entry; } ;
typedef scalar_t__ off_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 struct zip* FUNC_0 (char const*,unsigned int,int*) ;
 int FUNC_1 (struct zip_cdir*) ;
 int FUNC_2 (struct zip*,struct zip_cdir*) ;
 struct zip_cdir* FUNC_3 (int *,unsigned int,int*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zip_cdir*) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;

struct zip *
FUNC_8(const char *VAR_2, FILE *VAR_3, unsigned int VAR_4, int *VAR_5)
{
    struct zip *VAR_6;
    struct zip_cdir *VAR_7;
    off_t VAR_8;

    if (FUNC_6(VAR_3, 0, VAR_0) < 0) {
 *VAR_5 = VAR_1;
 return ((void*)0);
    }
    VAR_8 = FUNC_7(VAR_3);


    if (VAR_8 == 0) {
 if ((VAR_6=FUNC_0(VAR_2, VAR_4, VAR_5)) == ((void*)0))
     FUNC_4(VAR_3);
 else
     VAR_6->zp = VAR_3;
 return VAR_6;
    }

    VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_8);
    if (VAR_7 == ((void*)0)) {
 FUNC_4(VAR_3);
 return ((void*)0);
    }

    if ((VAR_6=FUNC_0(VAR_2, VAR_4, VAR_5)) == ((void*)0)) {
 FUNC_1(VAR_7);
 FUNC_4(VAR_3);
 return ((void*)0);
    }

    VAR_6->entry = VAR_7->entry;
    VAR_6->nentry = VAR_7->nentry;
    VAR_6->nentry_alloc = VAR_7->nentry_alloc;
    VAR_6->comment_orig = VAR_7->comment;

    VAR_6->zp = VAR_3;

    FUNC_2(VAR_6, VAR_7);

    VAR_6->ch_flags = VAR_6->flags;

    FUNC_5(VAR_7);

    return VAR_6;
}
