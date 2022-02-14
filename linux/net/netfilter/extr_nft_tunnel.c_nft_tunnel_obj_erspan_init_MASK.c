
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct nlattr {int dummy; } ;
struct TYPE_8__ {int dir; } ;
struct TYPE_5__ {TYPE_4__ md2; int index; } ;
struct TYPE_6__ {int version; TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ erspan; } ;
struct nft_tunnel_opts {int len; int flags; TYPE_3__ u; } ;
struct erspan_metadata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_5(const struct nlattr *VAR_9,
          struct nft_tunnel_opts *VAR_10)
{
 struct nlattr *VAR_11[VAR_2 + 1];
 uint8_t VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = FUNC_2(VAR_11, VAR_2,
       VAR_9, VAR_8,
       ((void*)0));
 if (VAR_14 < 0)
  return VAR_14;

 VAR_15 = FUNC_3(FUNC_0(VAR_11[VAR_6]));
 switch (VAR_15) {
 case 129:
  if (!VAR_11[VAR_3])
   return -VAR_0;

  VAR_10->u.erspan.u.index =
   FUNC_0(VAR_11[VAR_3]);
  break;
 case 128:
  if (!VAR_11[VAR_4] ||
      !VAR_11[VAR_5])
   return -VAR_0;

  VAR_12 = FUNC_1(VAR_11[VAR_5]);
  VAR_13 = FUNC_1(VAR_11[VAR_4]);

  FUNC_4(&VAR_10->u.erspan.u.md2, VAR_12);
  VAR_10->u.erspan.u.md2.dir = VAR_13;
  break;
 default:
  return -VAR_1;
 }
 VAR_10->u.erspan.version = VAR_15;

 VAR_10->len = sizeof(struct erspan_metadata);
 VAR_10->flags = VAR_7;

 return 0;
}
