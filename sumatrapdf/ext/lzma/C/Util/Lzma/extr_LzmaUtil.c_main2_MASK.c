
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt64 ;
typedef int UInt32 ;
struct TYPE_6__ {int file; int s; } ;
struct TYPE_5__ {int file; int s; } ;
typedef TYPE_1__ CFileSeqInStream ;
typedef TYPE_2__ CFileOutStream ;
typedef scalar_t__ Bool ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,char const*) ;
 scalar_t__ FUNC_8 (int *,char const*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int FUNC_13 (char const*) ;

int FUNC_14(int VAR_11, const char *VAR_12[], char *VAR_13)
{
  CFileSeqInStream VAR_14;
  CFileOutStream VAR_15;
  char VAR_16;
  int VAR_17;
  int VAR_18;
  Bool VAR_19 = VAR_0;

  FUNC_3(&VAR_14);
  FUNC_5(&VAR_14.file);

  FUNC_2(&VAR_15);
  FUNC_5(&VAR_15.file);

  if (VAR_11 == 1)
  {
    FUNC_11(VAR_13);
    return 0;
  }

  if (VAR_11 < 3 || VAR_11 > 4 || FUNC_13(VAR_12[1]) != 1)
    return FUNC_12(VAR_13);

  VAR_16 = VAR_12[1][0];
  VAR_18 = (VAR_16 == 'e' || VAR_16 == 'E');
  if (!VAR_18 && VAR_16 != 'd' && VAR_16 != 'D')
    return FUNC_12(VAR_13);

  {
    size_t VAR_20 = sizeof(UInt32);
    size_t VAR_21 = sizeof(UInt64);
    if (VAR_20 != 4 || VAR_21 != 8)
      return FUNC_9(VAR_13, "Incorrect UInt32 or UInt64");
  }

  if (FUNC_7(&VAR_14.file, VAR_12[2]) != 0)
    return FUNC_9(VAR_13, "Can not open input file");

  if (VAR_11 > 3)
  {
    VAR_19 = VAR_6;
    if (FUNC_8(&VAR_15.file, VAR_12[3]) != 0)
      return FUNC_9(VAR_13, "Can not open output file");
  }
  else if (VAR_18)
    FUNC_12(VAR_13);

  if (VAR_18)
  {
    UInt64 VAR_22;
    FUNC_6(&VAR_14.file, &VAR_22);
    VAR_17 = FUNC_1(&VAR_15.s, &VAR_14.s, VAR_22, VAR_13);
  }
  else
  {
    VAR_17 = FUNC_0(&VAR_15.s, VAR_19 ? &VAR_14.s : ((void*)0));
  }

  if (VAR_19)
    FUNC_4(&VAR_15.file);
  FUNC_4(&VAR_14.file);

  if (VAR_17 != VAR_5)
  {
    if (VAR_17 == VAR_2)
      return FUNC_9(VAR_13, VAR_7);
    else if (VAR_17 == VAR_1)
      return FUNC_9(VAR_13, VAR_10);
    else if (VAR_17 == VAR_4)
      return FUNC_9(VAR_13, VAR_9);
    else if (VAR_17 == VAR_3)
      return FUNC_9(VAR_13, VAR_8);
    return FUNC_10(VAR_13, VAR_17);
  }
  return 0;
}
