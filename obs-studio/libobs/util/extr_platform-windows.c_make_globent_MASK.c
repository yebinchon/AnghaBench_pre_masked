
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct os_globent {int path; int directory; } ;
struct dstr {int array; int member_0; } ;
struct TYPE_4__ {int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;


 int FUNC_0 (struct dstr*,struct dstr*) ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*,int ) ;
 int FUNC_4 (struct dstr*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (int,char) ;

__attribute__((used)) static void FUNC_7(struct os_globent *VAR_0, WIN32_FIND_DATA *VAR_1,
    const char *VAR_2)
{
 struct dstr VAR_3 = {0};
 struct dstr VAR_4 = {0};
 char *VAR_5;

 FUNC_3(&VAR_3, VAR_1->cFileName);
 FUNC_1(&VAR_4, VAR_2);
 VAR_5 = FUNC_6(VAR_4.array, '/');
 if (VAR_5)
  FUNC_4(&VAR_4, VAR_5 + 1 - VAR_4.array);
 else
  FUNC_2(&VAR_4);

 FUNC_0(&VAR_4, &VAR_3);
 VAR_0->path = VAR_4.array;
 VAR_0->directory = FUNC_5(VAR_1);

 FUNC_2(&VAR_3);
}
