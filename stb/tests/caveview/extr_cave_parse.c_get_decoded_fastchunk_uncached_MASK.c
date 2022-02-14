
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fast_chunk ;
struct TYPE_4__ {scalar_t__ len; int* data; int refcount; } ;
typedef TYPE_1__ compressed_chunk ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned char*) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int * FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (int*) ;
 unsigned char* FUNC_7 (int*,int,int,int*) ;
 int FUNC_8 () ;

fast_chunk *FUNC_9(int VAR_0, int VAR_1)
{
   unsigned char *VAR_2;
   compressed_chunk *VAR_3;
   int VAR_4;
   int VAR_5;
   fast_chunk *VAR_6;

   FUNC_4();
   VAR_3 = FUNC_3(VAR_0, VAR_1);
   if (VAR_3->len != 0)
      ++VAR_3->refcount;
   FUNC_8();

   if (VAR_3->len == 0)
      return ((void*)0);

   FUNC_0(VAR_3 != ((void*)0));

   FUNC_0(VAR_3->data[4] == 2);

   VAR_4 = FUNC_6(VAR_3->data);
   VAR_2 = FUNC_7(VAR_3->data+5, VAR_4, VAR_4*3, &VAR_5);
   FUNC_0(VAR_2 != ((void*)0));
   FUNC_0(VAR_5 != 0);

   FUNC_4();
   FUNC_1(VAR_3);
   FUNC_8();




   VAR_6 = ((void*)0);

   if (VAR_6 == ((void*)0))
      FUNC_2(VAR_2);
   return VAR_6;
}
