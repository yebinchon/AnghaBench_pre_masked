
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t avail_out; char* msg; size_t total_out; int * next_out; int * next_in; void* opaque; void* zfree; void* zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int uint8_t ;
typedef size_t uInt ;
typedef int Byte ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (size_t) ;
 int * FUNC_7 (int *,size_t) ;
 int VAR_5 ;

uint8_t *FUNC_8(const uint8_t *VAR_6, size_t *VAR_7)
{
 size_t VAR_8 = VAR_0;
 uint8_t *VAR_9 = FUNC_6(VAR_8);
 int VAR_10;
 z_stream VAR_11;


 if (VAR_9 == ((void*)0)) return ((void*)0);
 FUNC_0(VAR_6 != ((void*)0));


 VAR_11.zalloc = VAR_2;
 VAR_11.zfree = VAR_2;
 VAR_11.opaque = VAR_2;
 VAR_11.next_out = (Byte *)VAR_9;
 VAR_11.next_in = (Byte *)VAR_6;
 VAR_11.avail_out = VAR_0;

 if (FUNC_5(&VAR_11) != VAR_3) goto error;


 do {
  if ((VAR_10 = FUNC_3(&VAR_11, VAR_1)) == VAR_3) {
   VAR_11.avail_out = (uInt)VAR_8;


   VAR_8 <<= 1;
   VAR_9 = FUNC_7(VAR_9, VAR_8 + 1);
   if (VAR_9 == ((void*)0)) return ((void*)0);

   VAR_11.next_out = (Byte *)(VAR_9 + VAR_11.avail_out);
  } else if (VAR_10 != VAR_4) {
   if (VAR_11.msg != ((void*)0)) {
    FUNC_1(VAR_5, "Could not decompress data: %s\n", VAR_11.msg);
   }
   FUNC_4(&VAR_11);
   goto error;
  }
 } while (VAR_10 != VAR_4);

 if (VAR_7 != ((void*)0)) *VAR_7 = VAR_11.total_out;
 if (FUNC_4(&VAR_11) != VAR_3) goto error;
 return VAR_9;

error:
 if (VAR_9 != ((void*)0)) FUNC_2(VAR_9);
 return ((void*)0);
}
