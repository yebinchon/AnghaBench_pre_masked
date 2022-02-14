
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct svc_cred {TYPE_1__* cr_group_info; void* cr_gid; int cr_uid; } ;
typedef void* kgid_t ;
typedef int __be32 ;
struct TYPE_4__ {void** gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xdr_stream*,int*) ;
 int FUNC_2 (void*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_10(struct xdr_stream *VAR_5,
    struct svc_cred *VAR_6)
{
 u32 VAR_7;
 __be32 *VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = FUNC_9(VAR_5, 4);
 if (FUNC_8(VAR_8 == ((void*)0)))
  return -VAR_2;

 VAR_7 = FUNC_0(VAR_8);

 if (VAR_7 > (3 + VAR_3) * sizeof(u32))
  return -VAR_2;


 VAR_12 = FUNC_1(VAR_5, &VAR_9);
 if (VAR_12)
  return VAR_12;
 VAR_6->cr_uid = FUNC_7(&VAR_4, VAR_9);


 VAR_12 = FUNC_1(VAR_5, &VAR_9);
 if (VAR_12)
  return VAR_12;
 VAR_6->cr_gid = FUNC_6(&VAR_4, VAR_9);


 VAR_12 = FUNC_1(VAR_5, &VAR_9);
 if (VAR_12)
  return VAR_12;
 VAR_10 = VAR_9;
 if ((3 + VAR_10) * sizeof(u32) != VAR_7)
  return -VAR_0;
 VAR_6->cr_group_info = FUNC_3(VAR_10);
 if (VAR_6->cr_group_info == ((void*)0))
  return -VAR_1;


 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  kgid_t VAR_13;
  VAR_12 = FUNC_1(VAR_5, &VAR_9);
  if (VAR_12)
   goto out_free_groups;
  VAR_12 = -VAR_0;
  VAR_13 = FUNC_6(&VAR_4, VAR_9);
  if (!FUNC_2(VAR_13))
   goto out_free_groups;
  VAR_6->cr_group_info->gid[VAR_11] = VAR_13;
 }
 FUNC_5(VAR_6->cr_group_info);

 return 0;
out_free_groups:
 FUNC_4(VAR_6->cr_group_info);
 return VAR_12;
}
