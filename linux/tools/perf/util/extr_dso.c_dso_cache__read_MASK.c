
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct machine {int dummy; } ;
struct dso_cache {int offset; scalar_t__ size; int data; } ;
struct dso {scalar_t__ binary_type; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct dso*,int,int ) ;
 struct dso_cache* FUNC_1 (struct dso*,struct dso_cache*) ;
 scalar_t__ FUNC_2 (struct dso_cache*,int,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (struct dso*,struct machine*,int,int ) ;
 int FUNC_4 (struct dso_cache*) ;
 struct dso_cache* FUNC_5 (scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_6(struct dso *VAR_4, struct machine *VAR_5,
  u64 VAR_6, u8 *VAR_7, ssize_t VAR_8)
{
 u64 VAR_9 = VAR_6 & VAR_1;
 struct dso_cache *VAR_10;
 struct dso_cache *VAR_11;
 ssize_t VAR_12;

 VAR_10 = FUNC_5(sizeof(*VAR_10) + VAR_2);
 if (!VAR_10)
  return -VAR_3;

 if (VAR_4->binary_type == VAR_0)
  VAR_12 = FUNC_0(VAR_4, VAR_9, VAR_10->data);
 else
  VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_9, VAR_10->data);

 if (VAR_12 > 0) {
  VAR_10->offset = VAR_9;
  VAR_10->size = VAR_12;

  VAR_11 = FUNC_1(VAR_4, VAR_10);
  if (VAR_11) {

   FUNC_4(VAR_10);
   VAR_10 = VAR_11;
  }

  VAR_12 = FUNC_2(VAR_10, VAR_6, VAR_7, VAR_8);
 }

 if (VAR_12 <= 0)
  FUNC_4(VAR_10);

 return VAR_12;
}
