
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
struct gssx_option_array {int * data; scalar_t__ count; } ;
struct gssx_option {int dummy; } ;
typedef int dummy ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,struct gssx_option*) ;
 int FUNC_2 (struct gssx_option*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_1,
    struct gssx_option_array *VAR_2)
{
 struct gssx_option VAR_3;
 u32 VAR_4, VAR_5;
 __be32 *VAR_6;

 VAR_6 = FUNC_4(VAR_1, 4);
 if (FUNC_3(VAR_6 == ((void*)0)))
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_6++);
 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_1(VAR_1, &VAR_3);
 }

 VAR_2->count = 0;
 VAR_2->data = ((void*)0);
 return 0;
}
