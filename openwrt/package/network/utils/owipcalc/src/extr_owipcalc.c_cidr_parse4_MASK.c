
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
struct TYPE_4__ {struct in_addr v4; } ;
struct TYPE_3__ {char* v4; } ;
struct cidr {int prefix; TYPE_2__ addr; TYPE_1__ buf; int family; } ;


 int VAR_0 ;
 int FUNC_0 (struct cidr*) ;
 int FUNC_1 (int ,char*,struct in_addr*) ;
 struct cidr* FUNC_2 (int) ;
 int FUNC_3 (struct in_addr*,int ,int) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,char**,int) ;

__attribute__((used)) static struct cidr * FUNC_8(const char *VAR_1)
{
 char *VAR_2 = ((void*)0), *VAR_3;
 struct in_addr VAR_4;
 struct cidr *VAR_5 = FUNC_2(sizeof(struct cidr));

 if (!VAR_5 || (FUNC_6(VAR_1) >= sizeof(VAR_5->buf.v4)))
  goto err;

 FUNC_4(VAR_5->buf.v4, sizeof(VAR_5->buf.v4), "%s", VAR_1);

 VAR_5->family = VAR_0;

 if ((VAR_2 = FUNC_5(VAR_5->buf.v4, '/')) != ((void*)0))
 {
  *VAR_2++ = 0;

  if (FUNC_5(VAR_2, '.') != ((void*)0))
  {
   if (FUNC_1(VAR_0, VAR_2, &VAR_4) != 1)
    goto err;

   for (VAR_5->prefix = 0; VAR_4.s_addr; VAR_4.s_addr >>= 1)
    VAR_5->prefix += (VAR_4.s_addr & 1);
  }
  else
  {
   VAR_5->prefix = FUNC_7(VAR_2, &VAR_3, 10);

   if ((VAR_2 == VAR_3) || (*VAR_3 != 0) || (VAR_5->prefix > 32))
    goto err;
  }
 }
 else
 {
  VAR_5->prefix = 32;
 }

 if (VAR_2 == VAR_5->buf.v4+1)
  FUNC_3(&VAR_5->addr.v4, 0, sizeof(VAR_5->addr.v4));
 else if (FUNC_1(VAR_0, VAR_5->buf.v4, &VAR_5->addr.v4) != 1)
  goto err;

 return VAR_5;

err:
 if (VAR_5)
  FUNC_0(VAR_5);

 return ((void*)0);
}
