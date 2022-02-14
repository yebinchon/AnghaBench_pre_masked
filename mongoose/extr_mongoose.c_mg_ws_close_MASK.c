
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mg_connection*,int ,void const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_2, const void *VAR_3,
                        size_t VAR_4) {
  if ((int) VAR_4 == ~0) {
    VAR_4 = FUNC_1((const char *) VAR_3);
  }
  FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4);
  VAR_2->flags |= VAR_0;
}
