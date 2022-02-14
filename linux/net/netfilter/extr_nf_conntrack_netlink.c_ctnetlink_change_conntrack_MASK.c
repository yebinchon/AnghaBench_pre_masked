
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conn {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_1 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_2 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_3 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_4 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_5 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_6 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_7 (struct nf_conn*,struct nlattr const* const*) ;

__attribute__((used)) static int
FUNC_8(struct nf_conn *VAR_13,
      const struct nlattr * const VAR_14[])
{
 int VAR_15;


 if (VAR_14[VAR_4] || VAR_14[VAR_3] || VAR_14[VAR_11])
  return -VAR_12;

 if (VAR_14[VAR_0]) {
  VAR_15 = FUNC_1(VAR_13, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
 }

 if (VAR_14[VAR_10]) {
  VAR_15 = FUNC_7(VAR_13, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
 }

 if (VAR_14[VAR_8]) {
  VAR_15 = FUNC_5(VAR_13, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
 }

 if (VAR_14[VAR_5]) {
  VAR_15 = FUNC_3(VAR_13, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
 }






 if (VAR_14[VAR_6] || VAR_14[VAR_7]) {
  VAR_15 = FUNC_4(VAR_13, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
 }

 if (VAR_14[VAR_9]) {
  VAR_15 = FUNC_6(VAR_13, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
 }

 if (VAR_14[VAR_1]) {
  VAR_15 = FUNC_0(VAR_13, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
 }

 return 0;
}
