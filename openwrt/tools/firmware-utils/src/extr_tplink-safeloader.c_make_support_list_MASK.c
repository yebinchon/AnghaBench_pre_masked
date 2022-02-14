
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_partition_entry {int * data; } ;
struct device_info {int support_trail; int support_list; } ;


 struct image_partition_entry FUNC_0 (char*,size_t) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static struct image_partition_entry FUNC_5(struct device_info *VAR_0) {
 size_t VAR_1 = FUNC_4(VAR_0->support_list);
 struct image_partition_entry VAR_2 = FUNC_0("support-list", VAR_1 + 9);

 FUNC_3(VAR_2.data, VAR_1);
 FUNC_2(VAR_2.data+4, 0, 4);
 FUNC_1(VAR_2.data+8, VAR_0->support_list, VAR_1);
 VAR_2.data[VAR_1+8] = VAR_0->support_trail;

 return VAR_2;
}
