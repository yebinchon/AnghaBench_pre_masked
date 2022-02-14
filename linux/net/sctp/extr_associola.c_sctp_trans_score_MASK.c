
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sctp_transport {int state; } ;






__attribute__((used)) static u8 FUNC_0(const struct sctp_transport *VAR_0)
{
 switch (VAR_0->state) {
 case 130:
  return 3;
 case 128:
  return 2;
 case 129:
  return 1;
 default:
  return 0;
 }
}
