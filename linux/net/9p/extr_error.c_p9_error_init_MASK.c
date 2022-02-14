
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct errormap {int list; int namelen; int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct errormap* VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(void)
{
 struct errormap *VAR_3;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(&VAR_2[VAR_4]);


 for (VAR_3 = VAR_1; VAR_3->name != ((void*)0); VAR_3++) {
  VAR_3->namelen = FUNC_4(VAR_3->name);
  VAR_4 = FUNC_3(VAR_3->name, VAR_3->namelen, 0) % VAR_0;
  FUNC_1(&VAR_3->list);
  FUNC_2(&VAR_3->list, &VAR_2[VAR_4]);
 }

 return 1;
}
