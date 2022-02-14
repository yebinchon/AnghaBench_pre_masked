
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int _offset; int _handle; } ;
typedef int HANDLE ;
typedef int FILE ;
typedef TYPE_1__ FAKE_FD ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int) ;
 int FUNC_2 (unsigned char*,void const*,size_t) ;
 scalar_t__ FUNC_3 (int ,int,int,int,unsigned char*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int,int,int,unsigned char*) ;

int FUNC_6(FILE *VAR_2, uint64_t VAR_3,
               const void *VAR_4, uint64_t VAR_5)
{
   int VAR_6 = 0;

   unsigned char *VAR_7 = FUNC_1(VAR_0, 4096);
   FAKE_FD* VAR_8 = (FAKE_FD*)VAR_2;
   HANDLE VAR_9 = (HANDLE)VAR_8->_handle;
   uint64_t VAR_10, VAR_11, VAR_12;

   if (VAR_7 == ((void*)0))
      return 0;

   VAR_3 += VAR_8->_offset;

   VAR_10 = VAR_3/VAR_1;
   VAR_11 = (VAR_3+VAR_5+VAR_1-1)/VAR_1;
   VAR_12 = VAR_11 - VAR_10;

   if((VAR_12*VAR_1) > VAR_0)
   {
      FUNC_4("write_data: Please increase MAX_DATA_LEN in file.h\n");
      goto out;
   }

   if(VAR_5 > 0xFFFFFFFFUL)
   {
      FUNC_4("write_data: Len is too big\n");
      goto out;
   }


   if(FUNC_3(VAR_9, VAR_1, VAR_10,
                     VAR_12, VAR_7) <= 0)
      goto out;

   if(!FUNC_2(&VAR_7[VAR_3 - VAR_10*VAR_1], VAR_4, (size_t)VAR_5))
      goto out;

   if(FUNC_5(VAR_9, VAR_1, VAR_10,
                     VAR_12, VAR_7) <= 0)
      goto out;

   VAR_6 = 1;

out:
   FUNC_0(VAR_7);
   return VAR_6;
}
