
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct fileinfo {int path; } ;
struct STATFS_T {int f_blocks; int f_bfree; int f_bsize; } ;
struct TYPE_7__ {int serial; int type; int label; } ;
struct TYPE_6__ {struct fileinfo* fileinfo; } ;
typedef int STREAM ;
typedef TYPE_1__ RDPCLIENT ;
typedef int NTSTATUS ;
typedef size_t NTHANDLE ;
typedef TYPE_2__ FsInfoType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct STATFS_T) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct STATFS_T*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;

NTSTATUS
FUNC_9(RDPCLIENT * VAR_5, NTHANDLE VAR_6, uint32 VAR_7, STREAM VAR_8)
{
 struct STATFS_T VAR_9;
 struct fileinfo *VAR_10;
 FsInfoType *VAR_11;

 VAR_10 = &(VAR_5->fileinfo[VAR_6]);

 if (FUNC_2(VAR_10->path, &VAR_9) != 0)
 {
  FUNC_5("statfs");
  return VAR_2;
 }

 VAR_11 = FUNC_1(VAR_10->path);

 switch (VAR_7)
 {
  case 128:

   FUNC_3(VAR_8, 0);
   FUNC_3(VAR_8, 0);
   FUNC_3(VAR_8, VAR_11->serial);

   FUNC_3(VAR_8, 2 * FUNC_7(VAR_11->label));

   FUNC_4(VAR_8, 0);
   FUNC_6(VAR_5, VAR_8, VAR_11->label, 2 * FUNC_7(VAR_11->label) - 2);
   break;

  case 129:

   FUNC_3(VAR_8, VAR_9.f_blocks);
   FUNC_3(VAR_8, 0);
   FUNC_3(VAR_8, VAR_9.f_bfree);
   FUNC_3(VAR_8, 0);
   FUNC_3(VAR_8, VAR_9.f_bsize / 0x200);
   FUNC_3(VAR_8, 0x200);
   break;

  case 136:

   FUNC_3(VAR_8, VAR_1 | VAR_0);
   FUNC_3(VAR_8, FUNC_0(VAR_9));

   FUNC_3(VAR_8, 2 * FUNC_7(VAR_11->type));
   FUNC_6(VAR_5, VAR_8, VAR_11->type, 2 * FUNC_7(VAR_11->type) - 2);
   break;

  case 132:
  case 134:
  case 135:
  case 133:
  case 130:
  case 131:

  default:

   FUNC_8("IRP Query Volume Information class: 0x%x\n", VAR_7);
   return VAR_3;
 }
 return VAR_4;
}
