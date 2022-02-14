
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int ,int ) ;

__attribute__((used)) __attribute__((constructor)) static void FUNC_2(void)
{
    static const char VAR_3[] =
        "<html>\n"
        "<head>\n"
        "<style>\n"
        "body {\n"
        "   background:black;\n"
        "   height:100\x25;\n"
        "   text-align:center;\n"
        "   border:0;\n"
        "   margin:0;\n"
        "   padding:0;\n"
        "   font-family: sans-serif;\n"
        "}\n"
        "img {\n"
        "   image-rendering: pixelated;\n"
        "   image-rendering: -moz-crisp-edges;\n"
        "   image-rendering: crisp-edges;\n"
        "}\n"
        "#styles {\n"
        "   color: #444;\n"
        "   top: 0;\n"
        "   position: absolute;\n"
        "   padding: 16px;\n"
        "   left: calc(50% - 100px - 16px);\n"
        "   width: 250px;\n"
        "}\n"
        "#styles a, #styles a:visited, #lwan a, #lwan a:visited { color: #666; }\n"
        "#lwan {\n"
        "   color: #555;\n"
        "   top: calc(100% - 40px);\n"
        "   position: absolute;\n"
        "   height: 20px;\n"
        "   font-size: 75%;\n"
        "   width: 300px;\n"
        "}\n"
        "</style>\n"
        "<meta http-equiv=\"Refresh\" content=\"3600;url=/{{variant}}\">\n"
        "<title>{{title}}</title>\n"
        "</head>\n"
        "<body>\n"
        "  <div id=\"lwan\">\n"
        "    Powered by the <a href=\"https://lwan.ws\">Lwan</a> web server.\n"
        "  </div>\n"
        "  <table height=\"100\x25\" width=\"100\x25\">\n"
        "  <tr>\n"
        "    <td align=\"center\" valign=\"middle\">\n"
        "    <div><img src=\"/{{variant}}.gif\" width=\"{{width}}px\"></div>\n"
        "    </td>\n"
        "  </tr>\n"
        "  </table>\n"
        "  <div id=\"styles\">\n"
        "    Styles: "
        "<a href=\"/clock\">Digital</a> &middot; "
        "<a href=\"/dali\">Dali</a> &middot; "
        "<a href=\"/blocks\">Blocks</a>\n"
        "  </div>\n"
        "</body>\n"
        "</html>";

    VAR_2 = FUNC_1(VAR_3, VAR_1,
                                             VAR_0);
    if (!VAR_2)
        FUNC_0("Could not compile template");
}
