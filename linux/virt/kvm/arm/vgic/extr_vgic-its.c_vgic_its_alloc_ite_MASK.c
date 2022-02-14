
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct its_ite {int ite_list; struct its_collection* collection; int event_id; } ;
struct its_device {int itt_head; } ;
struct its_collection {int dummy; } ;


 int VAR_0 ;
 struct its_ite* FUNC_0 (int ) ;
 int VAR_1 ;
 struct its_ite* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct its_ite *FUNC_3(struct its_device *VAR_2,
       struct its_collection *VAR_3,
       u32 VAR_4)
{
 struct its_ite *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->event_id = VAR_4;
 VAR_5->collection = VAR_3;

 FUNC_2(&VAR_5->ite_list, &VAR_2->itt_head);
 return VAR_5;
}
