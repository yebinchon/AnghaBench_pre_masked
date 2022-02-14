
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_map_handle {int dummy; } ;
struct snapshot_handle {scalar_t__ sync_read; } ;
struct hib_bio_batch {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snapshot_handle) ;
 int FUNC_1 (struct hib_bio_batch*) ;
 int FUNC_2 (struct hib_bio_batch*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct snapshot_handle*) ;
 int FUNC_6 (struct snapshot_handle*) ;
 int FUNC_7 (struct snapshot_handle*) ;
 int FUNC_8 (struct swap_map_handle*,int ,struct hib_bio_batch*) ;
 int FUNC_9 (int ,int ,unsigned int,char*) ;

__attribute__((used)) static int FUNC_10(struct swap_map_handle *VAR_2,
                      struct snapshot_handle *VAR_3,
                      unsigned int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6 = 0;
 ktime_t VAR_7;
 ktime_t VAR_8;
 struct hib_bio_batch VAR_9;
 int VAR_10;
 unsigned VAR_11;

 FUNC_1(&VAR_9);

 VAR_1 = 1;
 FUNC_4("Loading image data pages (%u pages)...\n", VAR_4);
 VAR_5 = VAR_4 / 10;
 if (!VAR_5)
  VAR_5 = 1;
 VAR_11 = 0;
 VAR_7 = FUNC_3();
 for ( ; ; ) {
  VAR_6 = FUNC_7(VAR_3);
  if (VAR_6 <= 0)
   break;
  VAR_6 = FUNC_8(VAR_2, FUNC_0(*VAR_3), &VAR_9);
  if (VAR_6)
   break;
  if (VAR_3->sync_read)
   VAR_6 = FUNC_2(&VAR_9);
  if (VAR_6)
   break;
  if (!(VAR_11 % VAR_5))
   FUNC_4("Image loading progress: %3d%%\n",
    VAR_11 / VAR_5 * 10);
  VAR_11++;
 }
 VAR_10 = FUNC_2(&VAR_9);
 VAR_8 = FUNC_3();
 if (!VAR_6)
  VAR_6 = VAR_10;
 if (!VAR_6) {
  FUNC_4("Image loading done\n");
  FUNC_6(VAR_3);
  if (!FUNC_5(VAR_3))
   VAR_6 = -VAR_0;
 }
 FUNC_9(VAR_7, VAR_8, VAR_4, "Read");
 return VAR_6;
}
