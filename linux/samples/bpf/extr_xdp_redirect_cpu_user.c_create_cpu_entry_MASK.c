
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (int ,int*,int*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,char*,int,int,int,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(__u32 VAR_5, __u32 VAR_6,
       __u32 VAR_7, bool VAR_8)
{
 __u32 VAR_9 = 0;
 __u32 VAR_10 = 0;
 int VAR_11;




 VAR_11 = FUNC_1(VAR_1, &VAR_5, &VAR_6, 0);
 if (VAR_11) {
  FUNC_3(VAR_4, "Create CPU entry failed (err:%d)\n", VAR_11);
  FUNC_2(VAR_0);
 }




 VAR_11 = FUNC_1(VAR_2, &VAR_7, &VAR_5, 0);
 if (VAR_11) {
  FUNC_3(VAR_4, "Add to avail CPUs failed\n");
  FUNC_2(VAR_0);
 }


 VAR_11 = FUNC_0(VAR_3, &VAR_10, &VAR_9);
 if (VAR_11) {
  FUNC_3(VAR_4, "Failed reading curr cpus_count\n");
  FUNC_2(VAR_0);
 }
 if (VAR_8) {
  VAR_9++;
  VAR_11 = FUNC_1(VAR_3, &VAR_10,
       &VAR_9, 0);
  if (VAR_11) {
   FUNC_3(VAR_4, "Failed write curr cpus_count\n");
   FUNC_2(VAR_0);
  }
 }

 FUNC_4("%s CPU:%u as idx:%u queue_size:%d (total cpus_count:%u)\n",
        VAR_8 ? "Add-new":"Replace", VAR_5, VAR_7,
        VAR_6, VAR_9);

 return 0;
}
