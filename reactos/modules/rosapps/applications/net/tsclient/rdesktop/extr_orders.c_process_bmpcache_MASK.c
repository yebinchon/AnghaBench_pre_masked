
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_5__ {scalar_t__ use_rdp5; } ;
typedef int STREAM ;
typedef TYPE_1__ RDPCLIENT ;
typedef int HBITMAP ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int*,int,int,int*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int,int,int*) ;

__attribute__((used)) static void
FUNC_9(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 HBITMAP VAR_2;
 uint16 VAR_3, VAR_4;
 uint8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 uint8 *VAR_10, *VAR_11;
 uint16 VAR_12, VAR_13, VAR_14, VAR_15;
 uint8 VAR_16;

 VAR_13 = VAR_14 = VAR_15 = 0xffff;

 FUNC_5(VAR_1, VAR_5);
 FUNC_5(VAR_1, VAR_16);
 FUNC_5(VAR_1, VAR_6);
 FUNC_5(VAR_1, VAR_7);
 FUNC_5(VAR_1, VAR_8);
 VAR_9 = (VAR_8 + 7) / 8;
 FUNC_4(VAR_1, VAR_12);
 FUNC_4(VAR_1, VAR_3);

 if (VAR_0->use_rdp5)
 {
  VAR_4 = VAR_12;
 }
 else
 {


  FUNC_4(VAR_1, VAR_13);
  FUNC_4(VAR_1, VAR_4);

  FUNC_4(VAR_1, VAR_14);
  FUNC_4(VAR_1, VAR_15);

 }
 FUNC_6(VAR_1, VAR_10, VAR_4);

 FUNC_0(("BMPCACHE(cx=%d,cy=%d,id=%d,idx=%d,bpp=%d,size=%d,pad1=%d,bufsize=%d,pad2=%d,rs=%d,fs=%d)\n", VAR_6, VAR_7, VAR_5, VAR_3, VAR_8, VAR_4, VAR_16, VAR_12, VAR_13, VAR_14, VAR_15));

 VAR_11 = (uint8 *) FUNC_7(VAR_6 * VAR_7 * VAR_9);

 if(VAR_11 == ((void*)0))
  return;

 if (FUNC_1(VAR_11, VAR_6, VAR_7, VAR_10, VAR_4, VAR_9))
 {
  VAR_2 = FUNC_8(VAR_0, VAR_6, VAR_7, VAR_11);
  FUNC_2(VAR_0, VAR_5, VAR_3, VAR_2);
 }
 else
 {
  FUNC_0(("Failed to decompress bitmap data\n"));
 }

 FUNC_3(VAR_11);
}
