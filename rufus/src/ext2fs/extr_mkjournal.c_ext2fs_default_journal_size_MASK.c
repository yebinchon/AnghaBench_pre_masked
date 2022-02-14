
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;



int FUNC_0(__u64 VAR_0)
{
 if (VAR_0 < 2048)
  return -1;
 if (VAR_0 < 32768)
  return (1024);
 if (VAR_0 < 256*1024)
  return (4096);
 if (VAR_0 < 512*1024)
  return (8192);
 if (VAR_0 < 4096*1024)
  return (16384);
 if (VAR_0 < 8192*1024)
  return (32768);
 if (VAR_0 < 16384*1024)
  return (65536);
 if (VAR_0 < 32768*1024)
  return (131072);
 return 262144;
}
