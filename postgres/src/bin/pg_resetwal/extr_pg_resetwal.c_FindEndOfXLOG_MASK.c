
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint64 ;
struct dirent {int d_name; } ;
typedef unsigned int XLogSegNo ;
struct TYPE_3__ {unsigned int redo; } ;
struct TYPE_4__ {unsigned int xlog_seg_size; TYPE_1__ checkPointCopy; } ;
typedef int DIR ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 unsigned int VAR_4 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void
FUNC_9(void)
{
 DIR *VAR_5;
 struct dirent *VAR_6;
 uint64 VAR_7;
 uint64 VAR_8;






 VAR_7 = (FUNC_2(0x0000000100000000) / VAR_0.xlog_seg_size);
 VAR_4 = VAR_0.checkPointCopy.redo / VAR_0.xlog_seg_size;






 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5 == ((void*)0))
 {
  FUNC_6("could not open directory \"%s\": %m", VAR_2);
  FUNC_4(1);
 }

 while (VAR_3 = 0, (VAR_6 = FUNC_7(VAR_5)) != ((void*)0))
 {
  if (FUNC_1(VAR_6->d_name) ||
   FUNC_0(VAR_6->d_name))
  {
   unsigned int VAR_9,
      VAR_10,
      VAR_11;
   XLogSegNo VAR_12;






   FUNC_8(VAR_6->d_name, "%08X%08X%08X", &VAR_9, &VAR_10, &VAR_11);
   VAR_12 = ((uint64) VAR_10) * VAR_7 + VAR_11;







   if (VAR_12 > VAR_4)
    VAR_4 = VAR_12;
  }
 }

 if (VAR_3)
 {
  FUNC_6("could not read directory \"%s\": %m", VAR_2);
  FUNC_4(1);
 }

 if (FUNC_3(VAR_5))
 {
  FUNC_6("could not close directory \"%s\": %m", VAR_2);
  FUNC_4(1);
 }





 VAR_8 = VAR_4 * VAR_0.xlog_seg_size;
 VAR_4 = (VAR_8 + VAR_0.xlog_seg_size - 1) / VAR_1;
 VAR_4++;
}
