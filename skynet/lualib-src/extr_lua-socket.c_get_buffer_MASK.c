
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_sendbuffer {size_t sz; void* buffer; void* type; } ;
typedef int lua_State ;





 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *,int,void*,size_t) ;
 size_t FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,int) ;
 size_t FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,int) ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 void* FUNC_8 (size_t) ;

__attribute__((used)) static void
FUNC_9(lua_State *VAR_3, int VAR_4, struct socket_sendbuffer *VAR_5) {
 void *VAR_6;
 switch(FUNC_7(VAR_3, VAR_4)) {
  size_t VAR_7;
 case 128:

  VAR_5->type = VAR_2;
  VAR_5->buffer = FUNC_6(VAR_3, VAR_4);
  if (FUNC_3(VAR_3, VAR_4+1)) {
   VAR_5->sz = FUNC_5(VAR_3, VAR_4+1);
  } else {
   VAR_5->sz = FUNC_4(VAR_3, VAR_4);
  }
  break;
 case 130: {
  int VAR_8 = -1;
  if (FUNC_3(VAR_3, VAR_4+1)) {
   VAR_8 = FUNC_5(VAR_3,VAR_4+1);
  }
  if (VAR_8 < 0) {
   VAR_5->type = VAR_1;
  } else {
   VAR_5->type = VAR_0;
  }
  VAR_5->buffer = FUNC_6(VAR_3,VAR_4);
  VAR_5->sz = (size_t)VAR_8;
  break;
  }
 case 129:

  VAR_7 = FUNC_1(VAR_3, VAR_4);
  VAR_6 = FUNC_8(VAR_7);
  FUNC_0(VAR_3, VAR_4, VAR_6, VAR_7);
  VAR_5->type = VAR_0;
  VAR_5->buffer = VAR_6;
  VAR_5->sz = VAR_7;
  break;
 default:
  VAR_5->type = VAR_2;
  VAR_5->buffer = FUNC_2(VAR_3, VAR_4, &VAR_5->sz);
  break;
 }
}
