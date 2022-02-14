
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {int const family; int net; struct xt_connlabel_mtinfo* matchinfo; } ;
struct xt_connlabel_mtinfo {int const options; int bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,int const) ;
 int FUNC_3 (char*,int const) ;

__attribute__((used)) static int FUNC_4(const struct xt_mtchk_param *VAR_3)
{
 const int VAR_4 = VAR_1 |
       VAR_2;
 struct xt_connlabel_mtinfo *VAR_5 = VAR_3->matchinfo;
 int VAR_6;

 if (VAR_5->options & ~VAR_4) {
  FUNC_3("Unknown options in mask %x\n",
        VAR_5->options);
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_3->net, VAR_3->family);
 if (VAR_6 < 0) {
  FUNC_3("cannot load conntrack support for proto=%u\n",
        VAR_3->family);
  return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_3->net, VAR_5->bit);
 if (VAR_6 < 0)
  FUNC_2(VAR_3->net, VAR_3->family);
 return VAR_6;
}
