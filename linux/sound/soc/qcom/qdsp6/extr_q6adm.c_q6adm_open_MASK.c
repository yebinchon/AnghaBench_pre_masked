
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct q6copp {int copp_idx; int topology; int mode; int rate; int channels; int app_type; int refcount; int bit_width; int node; } ;
struct q6adm {int copps_list_lock; int copps_list; } ;
struct device {int parent; } ;


 int VAR_0 ;
 struct q6copp* FUNC_0 (struct q6copp*) ;
 struct q6copp* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct q6copp*) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct q6adm* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 struct q6copp* FUNC_8 (struct q6adm*,int) ;
 int FUNC_9 (struct q6adm*,struct q6copp*,int,int,int,int,int ,int) ;
 struct q6copp* FUNC_10 (struct q6adm*,int,int,int,int,int,int ,int) ;
 int VAR_1 ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

struct q6copp *FUNC_13(struct device *VAR_2, int VAR_3, int VAR_4, int VAR_5,
        int VAR_6, int VAR_7, int VAR_8,
        uint16_t VAR_9, int VAR_10, int VAR_11)
{
 struct q6adm *VAR_12 = FUNC_4(VAR_2->parent);
 struct q6copp *VAR_13;
 unsigned long VAR_14;
 int VAR_15 = 0;

 if (VAR_3 < 0) {
  FUNC_3(VAR_2, "Invalid port_id 0x%x\n", VAR_3);
  return FUNC_1(-VAR_0);
 }

 VAR_13 = FUNC_10(VAR_12, VAR_3, VAR_7, VAR_8,
          VAR_5, VAR_6, VAR_9, VAR_10);
 if (VAR_13) {
  FUNC_3(VAR_2, "Found Matching Copp 0x%x\n", VAR_13->copp_idx);
  return VAR_13;
 }

 FUNC_11(&VAR_12->copps_list_lock, VAR_14);
 VAR_13 = FUNC_8(VAR_12, VAR_3);
 if (FUNC_2(VAR_13)) {
  FUNC_12(&VAR_12->copps_list_lock, VAR_14);
  return FUNC_0(VAR_13);
 }

 FUNC_7(&VAR_13->node, &VAR_12->copps_list);
 FUNC_12(&VAR_12->copps_list_lock, VAR_14);

 FUNC_5(&VAR_13->refcount);
 VAR_13->topology = VAR_7;
 VAR_13->mode = VAR_8;
 VAR_13->rate = VAR_5;
 VAR_13->channels = VAR_6;
 VAR_13->bit_width = VAR_9;
 VAR_13->app_type = VAR_10;


 VAR_15 = FUNC_9(VAR_12, VAR_13, VAR_3, VAR_4, VAR_7,
    VAR_6, VAR_9, VAR_5);
 if (VAR_15 < 0) {
  FUNC_6(&VAR_13->refcount, VAR_1);
  return FUNC_1(VAR_15);
 }

 return VAR_13;
}
