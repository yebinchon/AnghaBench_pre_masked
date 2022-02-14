
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32 ;
struct stat {int st_mode; } ;
struct TYPE_7__ {int notify_stamp; TYPE_2__* fileinfo; TYPE_1__* rdpdr_device; } ;
struct TYPE_6__ {size_t device_id; size_t flags_and_attributes; size_t accessmask; int delete_on_close; int path; int * pdir; } ;
struct TYPE_5__ {char* local_path; } ;
typedef TYPE_3__ RDPCLIENT ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;
typedef int DIR ;




 int FUNC_0 (int *) ;




 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_24 ;
 int VAR_25 ;

 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int,int) ;
 int * FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static NTSTATUS
FUNC_14(RDPCLIENT * VAR_28, uint32 VAR_29, uint32 VAR_30, uint32 VAR_31, uint32 VAR_32,
     uint32 VAR_33, char *VAR_34, NTHANDLE * VAR_35)
{
 NTHANDLE VAR_36;
 DIR *VAR_37;
 int VAR_38, VAR_39;
 char VAR_40[VAR_15];
 struct stat VAR_41;

 VAR_36 = 0;
 VAR_37 = ((void*)0);
 VAR_38 = 0;
 VAR_39 = VAR_23 | VAR_21 | VAR_24 | VAR_22 | VAR_25;

 if (*VAR_34 && VAR_34[FUNC_11(VAR_34) - 1] == '/')
  VAR_34[FUNC_11(VAR_34) - 1] = 0;
 FUNC_9(VAR_40, "%s%s", VAR_28->rdpdr_device[VAR_29].local_path, VAR_34);

 switch (VAR_32)
 {
  case 136:


   FUNC_13(VAR_40);
   VAR_38 |= VAR_8;
   break;

  case 135:


   VAR_38 |= VAR_8 | VAR_9;
   break;

  case 130:


   VAR_38 |= VAR_8;
   break;

  case 129:


   break;

  case 128:


   VAR_38 |= VAR_13;
   break;
 }




 if ((FUNC_10(VAR_40, &VAR_41) == 0) && (FUNC_1(VAR_41.st_mode)))
 {
  if (VAR_33 & VAR_1)
   return VAR_17;
  else
   VAR_33 |= VAR_0;
 }

 if (VAR_33 & VAR_0)
 {
  if (VAR_38 & VAR_8)
  {
   FUNC_5(VAR_40, VAR_39);
  }

  VAR_37 = FUNC_7(VAR_40);
  if (!VAR_37)
  {
   switch (VAR_27)
   {
    case 134:

     return VAR_16;

    case 131:

     return VAR_18;

    default:

     FUNC_8("opendir");
     return VAR_18;
   }
  }
  VAR_36 = FUNC_0(VAR_37);
 }
 else
 {

  if (VAR_30 & VAR_4
      || (VAR_30 & VAR_5 && VAR_30 & VAR_6))
  {
   VAR_38 |= VAR_12;
  }
  else if ((VAR_30 & VAR_6) && !(VAR_30 & VAR_5))
  {
   VAR_38 |= VAR_14;
  }
  else
  {
   VAR_38 |= VAR_11;
  }

  VAR_36 = FUNC_6(VAR_40, VAR_38, VAR_39);
  if (VAR_36 == -1)
  {
   switch (VAR_27)
   {
    case 132:

     return VAR_17;

    case 134:

     return VAR_16;

    case 131:

     return VAR_18;
    case 133:

     return VAR_19;
    default:

     FUNC_8("open");
     return VAR_18;
   }
  }


  if (FUNC_4(VAR_36, VAR_2, VAR_10) == -1)
   FUNC_8("fcntl");
 }

 if (VAR_36 >= VAR_7)
 {
  FUNC_2("Maximum number of open files (%s) reached. Increase MAX_OPEN_FILES!\n",
        VAR_36);
  FUNC_3(1);
 }

 if (VAR_37)
  VAR_28->fileinfo[VAR_36].pdir = VAR_37;
 else
  VAR_28->fileinfo[VAR_36].pdir = ((void*)0);

 VAR_28->fileinfo[VAR_36].device_id = VAR_29;
 VAR_28->fileinfo[VAR_36].flags_and_attributes = VAR_33;
 VAR_28->fileinfo[VAR_36].accessmask = VAR_30;
 FUNC_12(VAR_28->fileinfo[VAR_36].path, VAR_40, VAR_15 - 1);
 VAR_28->fileinfo[VAR_36].delete_on_close = VAR_3;
 VAR_28->notify_stamp = VAR_26;

 *VAR_35 = VAR_36;
 return VAR_20;
}
