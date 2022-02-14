
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint16_t ;
struct ethhdr {void* h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_4)
{
 struct ethhdr *VAR_5 = VAR_4;

 if (VAR_3) {
  uint16_t *VAR_6 = VAR_4 + VAR_0;

  VAR_5->h_proto = FUNC_0(VAR_1);
  VAR_6[1] = FUNC_0(VAR_2);
  return VAR_0 + 4;
 }

 VAR_5->h_proto = FUNC_0(VAR_2);
 return VAR_0;
}
