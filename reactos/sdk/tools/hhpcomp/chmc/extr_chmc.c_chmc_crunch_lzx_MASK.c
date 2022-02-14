
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct chmcLzxInfo {int fd; TYPE_3__* section; struct chmcFile* chm; scalar_t__ fd_offset; scalar_t__ eof; scalar_t__ error; int pos; int todo; scalar_t__ done; } ;
struct TYPE_4__ {int next; } ;
struct chmcFile {TYPE_1__ entries_list; TYPE_3__** sections; } ;
typedef int lzx_results ;
typedef int lzx_data ;
struct TYPE_5__ {int block_count; } ;
struct TYPE_6__ {TYPE_2__ reset_table_header; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct chmcLzxInfo*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct chmcFile*) ;
 int FUNC_2 (struct chmcFile*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int **,int,int ,struct chmcLzxInfo*,int (*) (struct chmcLzxInfo*),int ,struct chmcLzxInfo*,int ,struct chmcLzxInfo*) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;

int FUNC_8(struct chmcFile *VAR_6, int VAR_7)
{
 struct chmcLzxInfo VAR_8;

 lzx_data *VAR_9;
 int VAR_10 = 1;
 int VAR_11 = 1;
 int VAR_12;
 lzx_results VAR_13;
 int VAR_14 = 16;

 FUNC_1(VAR_6);

 if ((VAR_14 < 15) || (VAR_14 > 21)) {
  FUNC_3(VAR_5, "window size must be between 15 and 21 inclusive\n");
  return VAR_0;
 }

 VAR_8.chm = VAR_6;
 VAR_8.section = VAR_6->sections[VAR_7];
 VAR_8.done = 0;
 VAR_8.todo = VAR_8.section->offset;
 VAR_8.pos = VAR_6->entries_list.next;
 VAR_8.error = 0;
 VAR_8.eof = 0;

 VAR_8.fd = -1;
 VAR_8.fd_offset = 0;

 FUNC_2(VAR_8.chm, 0);
 VAR_8.section->reset_table_header.block_count++;
 VAR_12 = 1 << VAR_14;




 FUNC_6(&VAR_9, VAR_14,
          VAR_2, &VAR_8, FUNC_0,
          VAR_4, &VAR_8,
          VAR_3, &VAR_8);

 while(! FUNC_0(&VAR_8)) {
  if (VAR_11)
   FUNC_7(VAR_9);
  FUNC_4(VAR_9, VAR_12, VAR_10);
 }
 FUNC_5(VAR_9, &VAR_13);

 return VAR_1;
}
