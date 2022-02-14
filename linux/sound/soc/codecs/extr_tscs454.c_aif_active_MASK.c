
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aifs_status {int streams; } ;



__attribute__((used)) static bool FUNC_0(struct aifs_status *VAR_0, int VAR_1)
{
 return (0x03 << VAR_1 * 2) & VAR_0->streams;
}
