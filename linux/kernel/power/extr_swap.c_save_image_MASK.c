
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_map_handle {int dummy; } ;
struct snapshot_handle {int dummy; } ;
struct hib_bio_batch {int dummy; } ;
typedef int ktime_t ;


 int FUNC_0 (struct snapshot_handle) ;
 int FUNC_1 (struct hib_bio_batch*) ;
 int FUNC_2 (struct hib_bio_batch*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct snapshot_handle*) ;
 int FUNC_6 (struct swap_map_handle*,int ,struct hib_bio_batch*) ;
 int FUNC_7 (int ,int ,unsigned int,char*) ;

__attribute__((used)) static int FUNC_8(struct swap_map_handle *VAR_0,
                      struct snapshot_handle *VAR_1,
                      unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 struct hib_bio_batch VAR_7;
 ktime_t VAR_8;
 ktime_t VAR_9;

 FUNC_1(&VAR_7);

 FUNC_4("Saving image data pages (%u pages)...\n",
  VAR_2);
 VAR_3 = VAR_2 / 10;
 if (!VAR_3)
  VAR_3 = 1;
 VAR_5 = 0;
 VAR_8 = FUNC_3();
 while (1) {
  VAR_4 = FUNC_5(VAR_1);
  if (VAR_4 <= 0)
   break;
  VAR_4 = FUNC_6(VAR_0, FUNC_0(*VAR_1), &VAR_7);
  if (VAR_4)
   break;
  if (!(VAR_5 % VAR_3))
   FUNC_4("Image saving progress: %3d%%\n",
    VAR_5 / VAR_3 * 10);
  VAR_5++;
 }
 VAR_6 = FUNC_2(&VAR_7);
 VAR_9 = FUNC_3();
 if (!VAR_4)
  VAR_4 = VAR_6;
 if (!VAR_4)
  FUNC_4("Image saving done\n");
 FUNC_7(VAR_8, VAR_9, VAR_2, "Wrote");
 return VAR_4;
}
