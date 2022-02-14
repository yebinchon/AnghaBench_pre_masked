
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

void
FUNC_2(int VAR_1)
{
    if (VAR_1 == 0)
    {
        FUNC_1(VAR_0, FUNC_0("vcdcli usage:\n"));
        FUNC_1(VAR_0, FUNC_0("\tlist [/a]: list all the virtual drives\n"));
        FUNC_1(VAR_0, FUNC_0("\tcreate: create a virtual drive\n"));
        FUNC_1(VAR_0, FUNC_0("\tmount X path: mount path image on X virtual drive\n"));
        FUNC_1(VAR_0, FUNC_0("\tremount X: remount image on X virtual drive\n"));
        FUNC_1(VAR_0, FUNC_0("\tremount X: remount image on X virtual drive\n"));
        FUNC_1(VAR_0, FUNC_0("\teject X: eject image on X virtual drive\n"));
        FUNC_1(VAR_0, FUNC_0("\tremove X: remove virtual drive X\n"));
    }
    else if (VAR_1 == 1)
    {
        FUNC_1(VAR_0, FUNC_0("mount usage:\n"));
        FUNC_1(VAR_0, FUNC_0("\tmount <drive letter> <path.iso> [/u] [/j] [/p]\n"));
        FUNC_1(VAR_0, FUNC_0("\tMount the ISO image given in <path.iso> on the previously created virtual drive <drive letter>\n"));
        FUNC_1(VAR_0, FUNC_0("\t\tDo not use colon for drive letter\n"));
        FUNC_1(VAR_0, FUNC_0("\t\tUse /u to make UDF volumes not appear as such\n"));
        FUNC_1(VAR_0, FUNC_0("\t\tUse /j to make Joliet volumes not appear as such\n"));
        FUNC_1(VAR_0, FUNC_0("\t\tUse /p to make the mounting persistent\n"));
    }
    else if (VAR_1 == 2)
    {
        FUNC_1(VAR_0, FUNC_0("remount usage:\n"));
        FUNC_1(VAR_0, FUNC_0("\tremount <drive letter>\n"));
        FUNC_1(VAR_0, FUNC_0("\tRemount the ISO image that was previously mounted on the virtual drive <drive letter>\n"));
        FUNC_1(VAR_0, FUNC_0("\t\tDo not use colon for drive letter\n"));
    }
    else if (VAR_1 == 3)
    {
        FUNC_1(VAR_0, FUNC_0("eject usage:\n"));
        FUNC_1(VAR_0, FUNC_0("\teject <drive letter>\n"));
        FUNC_1(VAR_0, FUNC_0("\tEjects the ISO image that is mounted on the virtual drive <drive letter>\n"));
        FUNC_1(VAR_0, FUNC_0("\t\tDo not use colon for drive letter\n"));
    }
    else if (VAR_1 == 4)
    {
        FUNC_1(VAR_0, FUNC_0("remove usage:\n"));
        FUNC_1(VAR_0, FUNC_0("\tremove <drive letter>\n"));
        FUNC_1(VAR_0, FUNC_0("\tRemoves the virtual drive <drive letter> making it no longer usable\n"));
        FUNC_1(VAR_0, FUNC_0("\t\tDo not use colon for drive letter\n"));
    }
}
