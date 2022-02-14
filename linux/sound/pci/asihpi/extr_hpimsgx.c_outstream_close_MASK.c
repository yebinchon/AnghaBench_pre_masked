
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpi_response {scalar_t__ error; } ;
struct hpi_message {size_t adapter_index; size_t obj_index; } ;
struct TYPE_2__ {void* h_owner; scalar_t__ open_flag; } ;


 int FUNC_0 (int ,char*,void*,size_t,size_t,void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_response*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hpi_message*,struct hpi_response*) ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;

__attribute__((used)) static void FUNC_6(struct hpi_message *VAR_7, struct hpi_response *VAR_8,
 void *VAR_9)
{

 struct hpi_message VAR_10;
 struct hpi_response VAR_11;

 FUNC_2(VAR_8, VAR_1, VAR_2, 0);

 FUNC_3(&VAR_5);

 if (VAR_9 ==
  VAR_6[VAR_7->adapter_index][VAR_7->
   obj_index].h_owner) {



  VAR_6[VAR_7->adapter_index][VAR_7->
   obj_index].h_owner = ((void*)0);
  FUNC_4(&VAR_5);

  FUNC_1(&VAR_10, &VAR_11, VAR_1,
   VAR_3);
  VAR_10.adapter_index = VAR_7->adapter_index;
  VAR_10.obj_index = VAR_7->obj_index;
  FUNC_5(&VAR_10, &VAR_11);
  FUNC_3(&VAR_5);
  if (VAR_11.error) {
   VAR_6[VAR_7->adapter_index][VAR_7->
    obj_index].h_owner = VAR_9;
   VAR_8->error = VAR_11.error;
  } else {
   VAR_6[VAR_7->adapter_index][VAR_7->
    obj_index].open_flag = 0;
   VAR_6[VAR_7->adapter_index][VAR_7->
    obj_index].h_owner = ((void*)0);
  }
 } else {
  FUNC_0(VAR_4,
   "%p trying to close %d outstream %d owned by %p\n",
   VAR_9, VAR_7->adapter_index, VAR_7->obj_index,
   VAR_6[VAR_7->adapter_index][VAR_7->
    obj_index].h_owner);
  VAR_8->error = VAR_0;
 }
 FUNC_4(&VAR_5);
}
