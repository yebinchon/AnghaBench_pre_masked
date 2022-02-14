
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_netobj {int len; unsigned char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char**,int*) ;
 int FUNC_1 (struct xdr_netobj*,struct xdr_netobj*) ;

u32
FUNC_2(struct xdr_netobj *VAR_2, int *VAR_3,
        unsigned char **VAR_4, int VAR_5)
{
 unsigned char *VAR_6 = *VAR_4;
 int VAR_7;
 struct xdr_netobj VAR_8;
 int VAR_9 = 0;

 if ((VAR_5-=1) < 0)
  return VAR_0;
 if (*VAR_6++ != 0x60)
  return VAR_0;

 if ((VAR_7 = FUNC_0(&VAR_6, &VAR_5)) < 0)
  return VAR_0;

 if (VAR_7 != VAR_5)
  return VAR_0;

 if ((VAR_5-=1) < 0)
  return VAR_0;
 if (*VAR_6++ != 0x06)
  return VAR_0;

 if ((VAR_5-=1) < 0)
  return VAR_0;
 VAR_8.len = *VAR_6++;

 if ((VAR_5-=VAR_8.len) < 0)
  return VAR_0;
 VAR_8.data = VAR_6;
 VAR_6+=VAR_8.len;

 if (! FUNC_1(&VAR_8, VAR_2))
  VAR_9 = VAR_1;




 if ((VAR_5-=2) < 0)
  return VAR_0;

 if (VAR_9)
  return VAR_9;

 if (!VAR_9) {
  *VAR_4 = VAR_6;
  *VAR_3 = VAR_5;
 }

 return VAR_9;
}
