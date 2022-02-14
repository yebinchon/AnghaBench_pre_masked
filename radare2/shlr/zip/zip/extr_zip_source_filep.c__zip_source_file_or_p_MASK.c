
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint64_t ;
typedef int zip_int64_t ;
struct zip_stat {int dummy; } ;
struct zip_source {int dummy; } ;
struct zip {int error; } ;
struct read_file {int len; int closep; int st; int * fname; int off; int * f; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct read_file*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,struct zip_stat const*,int) ;
 int VAR_2 ;
 int * FUNC_4 (char const*) ;
 struct zip_source* FUNC_5 (struct zip*,int ,struct read_file*) ;
 int FUNC_6 (int *) ;

struct zip_source *
FUNC_7(struct zip *VAR_3, const char *VAR_4, FILE *VAR_5,
        zip_uint64_t VAR_6, zip_int64_t VAR_7, int VAR_8,
        const struct zip_stat *VAR_9)
{
    struct read_file *VAR_10;
    struct zip_source *VAR_11;

    if (VAR_5 == ((void*)0) && VAR_4 == ((void*)0)) {
 FUNC_0(&VAR_3->error, VAR_0, 0);
 return ((void*)0);
    }

    if ((VAR_10=(struct read_file *)FUNC_2(sizeof(struct read_file))) == ((void*)0)) {
 FUNC_0(&VAR_3->error, VAR_1, 0);
 return ((void*)0);
    }

    VAR_10->fname = ((void*)0);
    if (VAR_4) {
 if ((VAR_10->fname=FUNC_4(VAR_4)) == ((void*)0)) {
     FUNC_0(&VAR_3->error, VAR_1, 0);
     FUNC_1(VAR_10);
     return ((void*)0);
 }
    }
    VAR_10->f = VAR_5;
    VAR_10->off = VAR_6;
    VAR_10->len = (VAR_7 ? VAR_7 : -1);
    VAR_10->closep = VAR_10->fname ? 1 : VAR_8;
    if (VAR_9)
 FUNC_3(&VAR_10->st, VAR_9, sizeof(VAR_10->st));
    else
 FUNC_6(&VAR_10->st);

    if ((VAR_11=FUNC_5(VAR_3, VAR_2, VAR_10)) == ((void*)0)) {
 FUNC_1(VAR_10);
 return ((void*)0);
    }

    return VAR_11;
}
