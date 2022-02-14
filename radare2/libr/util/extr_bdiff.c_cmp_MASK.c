
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {scalar_t__ h; scalar_t__ len; int l; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) inline static int FUNC_1(struct line *VAR_0, struct line *VAR_1) {
 return VAR_0->h != VAR_1->h || VAR_0->len != VAR_1->len || FUNC_0(VAR_0->l, VAR_1->l, VAR_0->len);
}
