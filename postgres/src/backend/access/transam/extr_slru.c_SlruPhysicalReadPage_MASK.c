
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_6__ {TYPE_1__* shared; } ;
struct TYPE_5__ {int * page_buffer; } ;
typedef TYPE_1__* SlruShared ;
typedef TYPE_2__* SlruCtl ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int VAR_13 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static bool
FUNC_10(SlruCtl VAR_17, int VAR_18, int VAR_19)
{
 SlruShared VAR_20 = VAR_17->shared;
 int VAR_21 = VAR_18 / VAR_10;
 int VAR_22 = VAR_18 % VAR_10;
 int VAR_23 = VAR_22 * VAR_0;
 char VAR_24[VAR_4];
 int VAR_25;

 FUNC_3(VAR_17, VAR_24, VAR_21);
 VAR_25 = FUNC_2(VAR_24, VAR_5 | VAR_6);
 if (VAR_25 < 0)
 {
  if (VAR_14 != VAR_1 || !VAR_2)
  {
   VAR_15 = VAR_9;
   VAR_16 = VAR_14;
   return 0;
  }

  FUNC_4(VAR_3,
    (FUNC_5("file \"%s\" doesn't exist, reading as zeroes",
      VAR_24)));
  FUNC_1(VAR_20->page_buffer[VAR_19], 0, VAR_0);
  return 1;
 }

 if (FUNC_6(VAR_25, (off_t) VAR_23, VAR_7) < 0)
 {
  VAR_15 = VAR_12;
  VAR_16 = VAR_14;
  FUNC_0(VAR_25);
  return 0;
 }

 VAR_14 = 0;
 FUNC_8(VAR_13);
 if (FUNC_9(VAR_25, VAR_20->page_buffer[VAR_19], VAR_0) != VAR_0)
 {
  FUNC_7();
  VAR_15 = VAR_11;
  VAR_16 = VAR_14;
  FUNC_0(VAR_25);
  return 0;
 }
 FUNC_7();

 if (FUNC_0(VAR_25) != 0)
 {
  VAR_15 = VAR_8;
  VAR_16 = VAR_14;
  return 0;
 }

 return 1;
}
