
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* XLogLongPageHeader ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int xlp_seg_size; } ;
typedef TYPE_2__ PGAlignedXLogBlock ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (char*,int ,int ) ;
 char* VAR_6 ;
 scalar_t__ FUNC_6 (int,int ,scalar_t__) ;
 int VAR_7 ;
 char* FUNC_7 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_8(void)
{
 bool VAR_8 = 0;
 int VAR_9;
 PGAlignedXLogBlock VAR_10;

 FUNC_0(VAR_2 == -1);

 if ((VAR_9 = FUNC_5(VAR_1, VAR_0, 0)) < 0)
 {
  FUNC_4(VAR_7, "%s: could not open WAL file \"%s\": %s\n",
    VAR_6, VAR_1, FUNC_7(VAR_5));
  return 0;
 }

 VAR_5 = 0;
 if (FUNC_6(VAR_9, VAR_10.data, VAR_3) == VAR_3)
 {
  XLogLongPageHeader VAR_11 = (XLogLongPageHeader) VAR_10.data;

  VAR_2 = VAR_11->xlp_seg_size;

  if (FUNC_1(VAR_2))
  {

   VAR_8 = 1;
  }
  else
   FUNC_4(VAR_7,
     "%s: WAL segment size must be a power of two between 1MB and 1GB, but the WAL file header specifies %d bytes\n",
     VAR_6, VAR_2);
 }
 else
 {




  if (VAR_5 != 0)
  {
   if (VAR_4)
    FUNC_4(VAR_7, "could not read file \"%s\": %s\n",
      VAR_1, FUNC_7(VAR_5));
  }
  else
  {
   if (VAR_4)
    FUNC_4(VAR_7, "not enough data in file \"%s\"\n",
      VAR_1);
  }
 }

 FUNC_3(VAR_7);

 FUNC_2(VAR_9);
 return VAR_8;
}
