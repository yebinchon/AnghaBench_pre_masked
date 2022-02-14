
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct search_path {char const* dirname; struct search_path* next; } ;
struct TYPE_2__ {char* dir; } ;
typedef int FILE ;


 int FUNC_0 (int **) ;
 TYPE_1__* VAR_0 ;
 struct search_path* VAR_1 ;
 char* FUNC_1 (char const*,char const*,int **) ;

__attribute__((used)) static char *FUNC_2(const char *VAR_2, FILE **VAR_3)
{
 const char *VAR_4 = ((void*)0);
 struct search_path *VAR_5;
 char *VAR_6;


 FUNC_0(VAR_3);
 if (VAR_0)
  VAR_4 = VAR_0->dir;
 VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_3);


 for (VAR_5 = VAR_1; !*VAR_3 && VAR_5; VAR_5 = VAR_5->next)
  VAR_6 = FUNC_1(VAR_5->dirname, VAR_2, VAR_3);

 return VAR_6;
}
