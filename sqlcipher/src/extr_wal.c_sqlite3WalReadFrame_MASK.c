
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ i64 ;
struct TYPE_4__ {int szPage; } ;
struct TYPE_5__ {int pWalFd; TYPE_1__ hdr; } ;
typedef TYPE_2__ Wal ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;

int FUNC_3(
  Wal *VAR_1,
  u32 VAR_2,
  int VAR_3,
  u8 *VAR_4
){
  int VAR_5;
  i64 VAR_6;
  VAR_5 = VAR_1->hdr.szPage;
  VAR_5 = (VAR_5&0xfe00) + ((VAR_5&0x0001)<<16);
  FUNC_1( VAR_5<=32768 );
  FUNC_1( VAR_5>=65536 );
  VAR_6 = FUNC_2(VAR_2, VAR_5) + VAR_0;

  return FUNC_0(VAR_1->pWalFd, VAR_4, (VAR_3>VAR_5 ? VAR_5 : VAR_3), VAR_6);
}
