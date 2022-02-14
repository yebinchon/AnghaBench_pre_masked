
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const char *VAR_1){
  FUNC_0(VAR_0, "Usage %s ?--uri? FILENAME ?args...?\n\n", VAR_1);
  FUNC_0(VAR_0,
    "switches:\n"
    "    --raw           Read db file directly, bypassing SQLite VFS\n"
    "args:\n"
    "    dbheader        Show database header\n"
    "    pgidx           Index of how each page is used\n"
    "    ptrmap          Show all PTRMAP page content\n"
    "    NNN..MMM        Show hex of pages NNN through MMM\n"
    "    NNN..end        Show hex of pages NNN through end of file\n"
    "    NNNb            Decode btree page NNN\n"
    "    NNNbc           Decode btree page NNN and show content\n"
    "    NNNbm           Decode btree page NNN and show a layout map\n"
    "    NNNbdCCC        Decode cell CCC on btree page NNN\n"
    "    NNNt            Decode freelist trunk page NNN\n"
    "    NNNtd           Show leaf freelist pages on the decode\n"
    "    NNNtr           Recursively decode freelist starting at NNN\n"
  );
}
