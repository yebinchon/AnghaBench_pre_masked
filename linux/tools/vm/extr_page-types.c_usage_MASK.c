
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char**) ;
 char** VAR_0 ;
 int FUNC_1 (unsigned long long) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char) ;

__attribute__((used)) static void FUNC_4(void)
{
 size_t VAR_1, VAR_2;

 FUNC_2(
"page-types [options]\n"
"            -r|--raw                   Raw mode, for kernel developers\n"
"            -d|--describe flags        Describe flags\n"
"            -a|--addr    addr-spec     Walk a range of pages\n"
"            -b|--bits    bits-spec     Walk pages with specified bits\n"
"            -c|--cgroup  path|@inode   Walk pages within memory cgroup\n"
"            -p|--pid     pid           Walk process address space\n"
"            -f|--file    filename      Walk file address space\n"
"            -i|--mark-idle             Mark pages idle\n"
"            -l|--list                  Show page details in ranges\n"
"            -L|--list-each             Show page details one by one\n"
"            -C|--list-cgroup           Show cgroup inode for pages\n"
"            -M|--list-mapcnt           Show page map count\n"
"            -N|--no-summary            Don't show summary info\n"
"            -X|--hwpoison              hwpoison pages\n"
"            -x|--unpoison              unpoison pages\n"
"            -F|--kpageflags filename   kpageflags file to parse\n"
"            -h|--help                  Show this usage message\n"
"flags:\n"
"            0x10                       bitfield format, e.g.\n"
"            anon                       bit-name, e.g.\n"
"            0x10,anon                  comma-separated list, e.g.\n"
"addr-spec:\n"
"            N                          one page at offset N (unit: pages)\n"
"            N+M                        pages range from N to N+M-1\n"
"            N,M                        pages range from N to M-1\n"
"            N,                         pages range from N to end\n"
"            ,M                         pages range from 0 to M-1\n"
"bits-spec:\n"
"            bit1,bit2                  (flags & (bit1|bit2)) != 0\n"
"            bit1,bit2=bit1             (flags & (bit1|bit2)) == bit1\n"
"            bit1,~bit2                 (flags & (bit1|bit2)) == bit1\n"
"            =bit1,bit2                 flags == (bit1|bit2)\n"
"bit-names:\n"
 );

 for (VAR_1 = 0, VAR_2 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  if (!VAR_0[VAR_1])
   continue;
  FUNC_2("%16s%s", VAR_0[VAR_1] + 2,
     FUNC_1(1ULL << VAR_1));
  if (++VAR_2 > 3) {
   VAR_2 = 0;
   FUNC_3('\n');
  }
 }
 FUNC_2("\n                                   "
  "(r) raw mode bits  (o) overloaded bits\n");
}
