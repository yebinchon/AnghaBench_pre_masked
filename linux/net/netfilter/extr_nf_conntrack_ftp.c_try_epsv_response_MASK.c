
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port; } ;
struct TYPE_4__ {TYPE_1__ tcp; } ;
struct nf_conntrack_man {TYPE_2__ u; } ;


 int FUNC_0 (char const*,int,size_t,char,int *) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, size_t VAR_1,
        struct nf_conntrack_man *VAR_2, char VAR_3,
        unsigned int *VAR_4)
{
 char VAR_5;


 if (VAR_1 <= 3) return 0;
 VAR_5 = VAR_0[0];
 if (FUNC_1(VAR_5) || VAR_5 < 33 || VAR_5 > 126 ||
     VAR_0[1] != VAR_5 || VAR_0[2] != VAR_5)
  return 0;

 return FUNC_0(VAR_0, 3, VAR_1, VAR_5, &VAR_2->u.tcp.port);
}
