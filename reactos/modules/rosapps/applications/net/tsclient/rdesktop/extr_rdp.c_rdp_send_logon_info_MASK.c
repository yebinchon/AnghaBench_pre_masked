
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef char wchar_t ;
typedef int uint32 ;
typedef int time_t ;
struct TYPE_7__ {int server_rdp_version; int rdp5_performanceflags; int use_rdp5; scalar_t__ encryption; } ;
typedef int * STREAM ;
typedef TYPE_1__ RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*,int *,char*,int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (TYPE_1__*,int,int) ;
 int FUNC_11 (TYPE_1__*,int *,int) ;
 char* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static BOOL
FUNC_15(RDPCLIENT * VAR_5, uint32 VAR_6, wchar_t *VAR_7, wchar_t *VAR_8,
      wchar_t *VAR_9, wchar_t *VAR_10, wchar_t *VAR_11)
{
 wchar_t *VAR_12 = FUNC_12(VAR_5);
 int VAR_13 = 2 * (int)FUNC_14(VAR_7);
 int VAR_14 = 2 * (int)FUNC_14(VAR_8);
 int VAR_15 = 2 * (int)FUNC_14(VAR_9);
 int VAR_16 = 2 * (int)FUNC_14(VAR_10);
 int VAR_17 = 2 * (int)FUNC_14(VAR_11);
 int VAR_18 = 2 * (int)FUNC_14(VAR_12);
 int VAR_19 = 2 * (int)FUNC_14(L"C:\\WINNT\\System32\\mstscax.dll");
 int VAR_20 = 0;
 uint32 VAR_21 = VAR_5->encryption ? (VAR_4 | VAR_3) : VAR_4;
 STREAM VAR_22;
 time_t VAR_23 = FUNC_13(((void*)0));
 time_t VAR_24;

 if (!VAR_5->use_rdp5 || 1 == VAR_5->server_rdp_version)
 {
  FUNC_0(("Sending RDP4-style Logon packet\n"));

  VAR_22 = FUNC_10(VAR_5, VAR_21, 18 + VAR_13 + VAR_14 + VAR_15
        + VAR_16 + VAR_17 + 10);

  if(VAR_22 == ((void*)0))
   return VAR_0;

  FUNC_5(VAR_22, 0);
  FUNC_6(VAR_22, VAR_6);
  FUNC_4(VAR_22, VAR_13);
  FUNC_4(VAR_22, VAR_14);
  FUNC_4(VAR_22, VAR_15);
  FUNC_4(VAR_22, VAR_16);
  FUNC_4(VAR_22, VAR_17);
  FUNC_8(VAR_5, VAR_22, VAR_7, VAR_13);
  FUNC_8(VAR_5, VAR_22, VAR_8, VAR_14);
  FUNC_8(VAR_5, VAR_22, VAR_9, VAR_15);
  FUNC_8(VAR_5, VAR_22, VAR_10, VAR_16);
  FUNC_8(VAR_5, VAR_22, VAR_11, VAR_17);
 }
 else
 {

  VAR_6 |= VAR_2;
  FUNC_0(("Sending RDP5-style Logon packet\n"));
  VAR_20 = 4 +
   4 +
   2 +
   2 +
   (VAR_6 & VAR_1 ? 2 : 0) +
   (VAR_6 & VAR_2 ? 2 : 0) +
   2 +
   2 +
   (0 < VAR_13 ? VAR_13 : 2) +
   VAR_14 + (VAR_6 & VAR_1 ? VAR_15 : 0) + 0 +
   (VAR_6 & VAR_2 && !(VAR_6 & VAR_1) ? 2 : 0) +
   (0 < VAR_16 ? VAR_16 : 2) + (0 < VAR_17 ? VAR_17 : 2) + 2 +
   2 +
   VAR_18 +
   2 +
   VAR_19 +
   2 +
   2 +
   64 +
   2 +
   64 +
   32;

  VAR_22 = FUNC_10(VAR_5, VAR_21, VAR_20);
  FUNC_0(("Called sec_init with packetlen %d\n", VAR_20));

  if(VAR_22 == ((void*)0))
   return VAR_0;

  FUNC_5(VAR_22, 0);
  FUNC_6(VAR_22, VAR_6);
  FUNC_4(VAR_22, VAR_13);
  FUNC_4(VAR_22, VAR_14);
  if (VAR_6 & VAR_1)
  {
   FUNC_4(VAR_22, VAR_15);

  }
  if (VAR_6 & VAR_2 && !(VAR_6 & VAR_1))
  {
   FUNC_4(VAR_22, 0);
  }
  FUNC_4(VAR_22, VAR_16);
  FUNC_4(VAR_22, VAR_17);
  if (0 < VAR_13)
   FUNC_8(VAR_5, VAR_22, VAR_7, VAR_13);
  else
   FUNC_4(VAR_22, 0);
  FUNC_8(VAR_5, VAR_22, VAR_8, VAR_14);
  if (VAR_6 & VAR_1)
  {
   FUNC_8(VAR_5, VAR_22, VAR_9, VAR_15);
  }
  if (VAR_6 & VAR_2 && !(VAR_6 & VAR_1))
  {
   FUNC_4(VAR_22, 0);
  }
  if (0 < VAR_16)
  {
   FUNC_8(VAR_5, VAR_22, VAR_10, VAR_16);

  }
  else
  {
   FUNC_4(VAR_22, 0);
  }
  if (0 < VAR_17)
  {
   FUNC_8(VAR_5, VAR_22, VAR_11, VAR_17);
  }
  else
  {
   FUNC_4(VAR_22, 0);
  }
  FUNC_4(VAR_22, 2);
  FUNC_4(VAR_22, VAR_18 + 2);
  FUNC_8(VAR_5, VAR_22, VAR_12, VAR_18);
  FUNC_4(VAR_22, VAR_19 + 2);
  FUNC_8(VAR_5, VAR_22, L"C:\\WINNT\\System32\\mstscax.dll", VAR_19);

  VAR_24 = (FUNC_3(FUNC_1(&VAR_23)) - FUNC_3(FUNC_2(&VAR_23))) / 60;
  FUNC_6(VAR_22, (uint32)VAR_24);

  FUNC_8(VAR_5, VAR_22, L"GTB, normaltid", 2 * (int)FUNC_14(L"GTB, normaltid"));
  FUNC_7(VAR_22, 62 - 2 * FUNC_14(L"GTB, normaltid"));

  FUNC_6(VAR_22, 0x0a0000);
  FUNC_6(VAR_22, 0x050000);
  FUNC_6(VAR_22, 3);
  FUNC_6(VAR_22, 0);
  FUNC_6(VAR_22, 0);

  FUNC_8(VAR_5, VAR_22, L"GTB, sommartid", 2 * (int)FUNC_14(L"GTB, sommartid"));
  FUNC_7(VAR_22, 62 - 2 * FUNC_14(L"GTB, sommartid"));

  FUNC_6(VAR_22, 0x30000);
  FUNC_6(VAR_22, 0x050000);
  FUNC_6(VAR_22, 2);
  FUNC_5(VAR_22, 0);
  FUNC_6(VAR_22, 0xffffffc4);
  FUNC_6(VAR_22, 0xfffffffe);
  FUNC_6(VAR_22, VAR_5->rdp5_performanceflags);
  FUNC_5(VAR_22, 0);


 }
 FUNC_9(VAR_22);
 return FUNC_11(VAR_5, VAR_22, VAR_21);
}
