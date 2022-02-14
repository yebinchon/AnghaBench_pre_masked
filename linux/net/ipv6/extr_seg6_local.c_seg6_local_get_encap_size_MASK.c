
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seg6_local_lwt {TYPE_2__* srh; TYPE_1__* desc; } ;
struct nlattr {int dummy; } ;
struct lwtunnel_state {int dummy; } ;
struct TYPE_4__ {int hdrlen; } ;
struct TYPE_3__ {unsigned long attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 struct seg6_local_lwt* FUNC_1 (struct lwtunnel_state*) ;

__attribute__((used)) static int FUNC_2(struct lwtunnel_state *VAR_8)
{
 struct seg6_local_lwt *VAR_9 = FUNC_1(VAR_8);
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(4);

 VAR_10 = VAR_9->desc->attrs;

 if (VAR_10 & (1 << VAR_6))
  VAR_11 += FUNC_0((VAR_9->srh->hdrlen + 1) << 3);

 if (VAR_10 & (1 << VAR_7))
  VAR_11 += FUNC_0(4);

 if (VAR_10 & (1 << VAR_3))
  VAR_11 += FUNC_0(4);

 if (VAR_10 & (1 << VAR_4))
  VAR_11 += FUNC_0(16);

 if (VAR_10 & (1 << VAR_2))
  VAR_11 += FUNC_0(4);

 if (VAR_10 & (1 << VAR_5))
  VAR_11 += FUNC_0(4);

 if (VAR_10 & (1 << VAR_1))
  VAR_11 += FUNC_0(sizeof(struct nlattr)) +
         FUNC_0(VAR_0) +
         FUNC_0(4);

 return VAR_11;
}
