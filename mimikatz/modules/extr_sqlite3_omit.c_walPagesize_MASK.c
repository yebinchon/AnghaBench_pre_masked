
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int szPage; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ Wal ;



__attribute__((used)) static int FUNC_0(Wal *VAR_0){
  return (VAR_0->hdr.szPage&0xfe00) + ((VAR_0->hdr.szPage&0x0001)<<16);
}
