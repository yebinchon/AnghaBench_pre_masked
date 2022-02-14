
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {scalar_t__ version; scalar_t__ specific_error; scalar_t__ error; } ;
struct hpi_message {int adapter_index; int obj_index; } ;
struct hpi_control_cache_single {int dummy; } ;
struct hpi_control_cache_info {int dummy; } ;
struct hpi_control_cache {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct hpi_control_cache*,struct hpi_control_cache_info**) ;
 short FUNC_2 (struct hpi_control_cache_single*,struct hpi_message*,struct hpi_response*) ;

short FUNC_3(struct hpi_control_cache *VAR_1,
 struct hpi_message *VAR_2, struct hpi_response *VAR_3)
{
 struct hpi_control_cache_info *VAR_4;

 if (!FUNC_1(VAR_2->obj_index, VAR_1, &VAR_4)) {
  FUNC_0(VAR_0,
   "HPICMN find_control() failed for adap %d\n",
   VAR_2->adapter_index);
  return 0;
 }

 VAR_3->error = 0;
 VAR_3->specific_error = 0;
 VAR_3->version = 0;

 return FUNC_2((struct hpi_control_cache_single
   *)VAR_4, VAR_2, VAR_3);
}
