
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned long long st_size; long st_atime; long st_mtime; scalar_t__ st_ino; } ;
typedef int mtime ;
typedef int atime ;


 int FUNC_0 (long*) ;
 unsigned long long VAR_0 ;
 int FUNC_1 (char*,char const*,long,...) ;
 int FUNC_2 (char*,int,char*,int ) ;
 long FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, const struct stat *VAR_2)
{
 unsigned long long VAR_3 = VAR_2->st_size;
 char VAR_4[64], VAR_5[64];
 long VAR_6 = FUNC_3(((void*)0));

 FUNC_1("%s\tInode: %u\tSize: %llu (%llu pages)\n",
   VAR_1, (unsigned)VAR_2->st_ino,
   VAR_3, (VAR_3 + VAR_0 - 1) / VAR_0);

 FUNC_2(VAR_4, sizeof(VAR_4), "%c", FUNC_0(&VAR_2->st_atime));
 FUNC_2(VAR_5, sizeof(VAR_5), "%c", FUNC_0(&VAR_2->st_mtime));

 FUNC_1("Modify: %s (%ld seconds ago)\nAccess: %s (%ld seconds ago)\n",
   VAR_5, VAR_6 - VAR_2->st_mtime,
   VAR_4, VAR_6 - VAR_2->st_atime);
}
