
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int path; } ;
typedef int hda_nid_t ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct nid_path *VAR_0, hda_nid_t VAR_1)
{
 return FUNC_0(VAR_1, VAR_0->path, VAR_0->depth) >= 0;
}
