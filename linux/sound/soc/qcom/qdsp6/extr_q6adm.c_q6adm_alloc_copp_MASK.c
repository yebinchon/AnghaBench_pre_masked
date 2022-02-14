
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6copp {int copp_idx; int afe_port; int wait; struct q6adm* adm; } ;
struct q6adm {int * copp_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct q6copp* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct q6copp* FUNC_3 (int,int ) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static struct q6copp *FUNC_5(struct q6adm *VAR_4, int VAR_5)
{
 struct q6copp *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_4->copp_bitmap[VAR_5],
      VAR_3);

 if (VAR_7 > VAR_3)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 FUNC_4(VAR_7, &VAR_4->copp_bitmap[VAR_5]);
 VAR_6->copp_idx = VAR_7;
 VAR_6->afe_port = VAR_5;
 VAR_6->adm = VAR_4;

 FUNC_2(&VAR_6->wait);

 return VAR_6;
}
