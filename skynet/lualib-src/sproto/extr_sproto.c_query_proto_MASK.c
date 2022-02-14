
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto {int protocol_n; struct protocol* proto; } ;
struct protocol {int tag; } ;



__attribute__((used)) static struct protocol *
FUNC_0(const struct sproto *VAR_0, int VAR_1) {
 int VAR_2 = 0, VAR_3 = VAR_0->protocol_n;
 while(VAR_2<VAR_3) {
  int VAR_4 = (VAR_2+VAR_3)/2;
  int VAR_5 = VAR_0->proto[VAR_4].tag;
  if (VAR_5==VAR_1) {
   return &VAR_0->proto[VAR_4];
  }
  if (VAR_1 > VAR_5) {
   VAR_2 = VAR_4+1;
  } else {
   VAR_3 = VAR_4;
  }
 }
 return ((void*)0);
}
