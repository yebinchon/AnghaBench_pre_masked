
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reserve_info {struct reserve_info* next; } ;
struct dt_info {struct reserve_info* reservelist; } ;


 int VAR_0 ;
 int FUNC_0 (struct reserve_info**) ;
 int FUNC_1 (struct reserve_info**,int,int,int ) ;
 struct reserve_info** FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct dt_info *VAR_1)
{
 struct reserve_info *VAR_2, **VAR_3;
 int VAR_4 = 0, VAR_5 = 0;

 for (VAR_2 = VAR_1->reservelist;
      VAR_2;
      VAR_2 = VAR_2->next)
  VAR_4++;

 if (VAR_4 == 0)
  return;

 VAR_3 = FUNC_2(VAR_4 * sizeof(*VAR_3));

 for (VAR_2 = VAR_1->reservelist;
      VAR_2;
      VAR_2 = VAR_2->next)
  VAR_3[VAR_5++] = VAR_2;

 FUNC_1(VAR_3, VAR_4, sizeof(*VAR_3), VAR_0);

 VAR_1->reservelist = VAR_3[0];
 for (VAR_5 = 0; VAR_5 < (VAR_4-1); VAR_5++)
  VAR_3[VAR_5]->next = VAR_3[VAR_5+1];
 VAR_3[VAR_4-1]->next = ((void*)0);

 FUNC_0(VAR_3);
}
