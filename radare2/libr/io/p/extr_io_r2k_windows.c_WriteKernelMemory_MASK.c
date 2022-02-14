
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_3__ {int QuadPart; } ;
struct TYPE_4__ {int len; int buffer; TYPE_1__ address; } ;
typedef TYPE_2__* PPA ;
typedef int PA ;
typedef int * LPVOID ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int *,int,int *,int,int*,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int const*,int) ;

int FUNC_5 (ut64 VAR_2, const ut8 *VAR_3, int VAR_4) {
 DWORD VAR_5 = -1, VAR_6 = 0;
 LPVOID VAR_7 = ((void*)0);
 int VAR_8;
 PPA VAR_9;
 if(VAR_1) {
  VAR_8 = sizeof (PA) + VAR_4;
  if (!(VAR_7 = FUNC_3 (VAR_8))) {
   FUNC_1 ("[r2k] WriteKernelMemory: Error can't allocate %i bytes of memory.\n", VAR_8);
   return -1;
  }
  VAR_9 = (PPA)VAR_7;
  VAR_9->address.QuadPart = VAR_2;
  VAR_9->len = VAR_4;
  FUNC_4 (&VAR_9->buffer, VAR_3, VAR_4);
  if (FUNC_0 (VAR_1, VAR_0, VAR_7, VAR_8, VAR_7, VAR_8, &VAR_6, ((void*)0))) {
   VAR_5 = VAR_4;
  } else {
   FUNC_1 ("[r2k] WriteKernelMemory: Error IOCTL_WRITE_KERNEL_MEM.\n");
   VAR_5 = -1;
  }
  FUNC_2 (VAR_7);
 } else {
  FUNC_1 ("Driver not initialized.\n");
 }
 return VAR_5;
}
