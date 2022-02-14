
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t avail_in; size_t avail_out; int * next_out; } ;
typedef TYPE_1__ z_stream ;
struct TYPE_6__ {size_t size; size_t used; char* aptr; char* data; size_t free; int member_4; int member_3; int member_2; int * member_1; int * member_0; } ;
typedef TYPE_2__ php_zlib_buffer ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,size_t) ;
 int FUNC_3 (int ,char*,int,int,size_t,size_t,size_t,size_t,size_t) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_6 ;

__attribute__((used)) static inline int FUNC_5(z_stream *VAR_7, size_t VAR_8, char **VAR_9, size_t *VAR_10)
{
 int VAR_11, VAR_12 = 0;
 php_zlib_buffer VAR_13 = {((void*)0), ((void*)0), 0, 0, 0};

 *VAR_9 = ((void*)0);
 *VAR_10 = 0;

 VAR_13.size = (VAR_8 && (VAR_8 < VAR_7->avail_in)) ? VAR_8 : VAR_7->avail_in;

 do {
  if ((VAR_8 && (VAR_8 <= VAR_13.used)) || !(VAR_13.aptr = FUNC_2(VAR_13.data, VAR_13.size))) {
   VAR_11 = VAR_2;
  } else {
   VAR_13.data = VAR_13.aptr;
   VAR_7->avail_out = VAR_13.free = VAR_13.size - VAR_13.used;
   VAR_7->next_out = (Bytef *) VAR_13.data + VAR_13.used;



   VAR_11 = FUNC_4(VAR_7, VAR_3);

   VAR_13.used += VAR_13.free - VAR_7->avail_out;
   VAR_13.free = VAR_7->avail_out;



   VAR_13.size += (VAR_13.size >> 3) + 1;
  }
 } while ((VAR_0 == VAR_11 || (VAR_4 == VAR_11 && VAR_7->avail_in)) && ++VAR_12 < 100);

 if (VAR_11 == VAR_5) {
  VAR_13.data = FUNC_1(VAR_13.data, VAR_13.used + 1);
  VAR_13.data[VAR_13.used] = '\0';
  *VAR_9 = VAR_13.data;
  *VAR_10 = VAR_13.used;
 } else {
  if (VAR_13.data) {
   FUNC_0(VAR_13.data);
  }


  VAR_11 = (VAR_11 == VAR_4) ? VAR_1 : VAR_11;
 }
 return VAR_11;
}
